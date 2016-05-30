from flask import Flask, send_from_directory
import sys
import sqlite3
import json

app = Flask(__name__)

conn = sqlite3.connect('database.db')
cursor = conn.cursor()
cursor.execute("""
CREATE TABLE IF NOT EXISTS files(
     id INTEGER PRIMARY KEY AUTOINCREMENT UNIQUE,
     name VARCHAR,
     filename VARCHAR,
     version VARCHAR,
     lien VARCHAR
)
""")
cursor.execute("""
INSERT INTO files(name, filename, version, lien) VALUES
("lol", "lol.tar.gz", "1.5", "/packages/lol.tar.gz"),
("Python", "Python-3.3.2.tar.gz", "3.3.2", "/packages/Python-3.3.2.tar.gz"),
("toto", "toto.tar.gz", "2.0", "/packages/toto.tar.gz")
""")
conn.commit()


@app.route('/')
def hello():
    return 'Hello'

@app.route('/packages')
def hello1():
    return 'Hello1'

@app.route('/packages/lol.tar.gz')
def hello2():
    return 'Hello2'

@app.route('/packages/<path:filename>')
def download_file(filename):
    return send_from_directory('packages',
                               filename)

@app.route('/search/<filename>')
def search(filename):
    cursor = conn.execute("SELECT * FROM files WHERE name LIKE '%" + filename + "%'")
    tab = []
    for row in cursor:
        tab.append(row)
    return json.dumps(tab)


if __name__ == '__main__':
    app.run()
