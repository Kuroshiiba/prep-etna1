/* etape 5 */
SELECT *
FROM Utilisateurs;

/* etape 6 */
SELECT ID, Libelle, Description, Prix_achat, Prix_vente, Nombres_produit, Date_creation, Date_modification
FROM Produits;

SELECT ID, Libelle, Description, Date_creation, Date_modification
FROM Categories;

/* etape 7 */
SELECT Nom, Prenom, Date_de_naissance
FROM Utilisateurs
ORDER BY Date_de_naissance DESC;

SELECT Nom, Prenom, Date_de_naissance
FROM Utilisateurs
ORDER BY Nom ASC;

/* etape 8 */
SELECT Libelle
FROM Produits
LIMIT 5;

/* etape 9 */
SELECT COUNT(*)
FROM Utilisateurs;

/* etape 10 */
SELECT SUM(Prix_vente)
FROM Produits;

/* etape 11 */
SELECT P.*
FROM DOGAT_lacamb_t.Produits P, DOGAT_lacamb_t.Categorie_Produit cp
WHERE NOT (P.ID=cp.ID_produit);

SELECT P.*
FROM DOGAT_lacamb_t.Produits P, DOGAT_lacamb_t.Categorie_Produit cp
WHERE P.ID=cp.ID_produit;

/* etape 12 */
SELECT *
FROM Produits
WHERE ID BETWEEN 1 AND 5;

/* etape 13 */
SELECT *
FROM Categories
WHERE ID = 1 OR ID = 3;

/* etape 14 */
SELECT *
FROM Utilisateurs
WHERE ID = 2 OR ID = 7;

/* etape 15 */
SELECT *
FROM Produits
WHERE Prix_vente > '0.50';

/* etape 16 */
UPDATE Utilisateurs 
SET Nom = 'Boubou',
	Prenom = 'Jean-rosette',
	Date_de_naissance = '1969-20-30',
	Ville = 'Boulogne',
	Adresse = 'Avenue du buisson',
	Code_postale = '77500',
	Pays = 'France',
	Sexe = 'Masculin',
	Rôle = '2',
	Date_creation = '2014/09/20',
	Date_modification = '2015/11/19'
WHERE ID = 5;

/* etape 17 */
SELECT *
FROM Utilisateurs U, Rôle R
WHERE U.Rôle = R.ID

/* etape 18 */
SELECT Produits.Libelle, Categories.*
FROM Produits, Categories, Categorie_Produit
WHERE Produits.ID = Categorie_Produit.ID_produit AND Categories.ID = Categorie_Produit.ID_categorie
UNION
SELECT Produits.Libelle, "NONE", "NONE", "NONE", "NONE", "NONE"
FROM Produits
WHERE ID NOT IN (SELECT ID_produit FROM Categorie_Produit);

/* etape 19 */
SELECT Produits.Description, Categories.*
FROM Produits, Categories, Categorie_Produit
WHERE Produits.ID = Categorie_Produit.ID_produit AND Categories.ID = Categorie_Produit.ID_categorie

/* etape 20 */
DELETE FROM Utilisateurs
WHERE ID = 5;

/* etape 21 */
CREATE TABLE backup_produit
(
	ID INT(10),
	Libelle VARCHAR(100),
	Description VARCHAR(100),
	Prix_achat VARCHAR(6),
	Prix_vente VARCHAR(6),
	Nombres_produit INT(10),
	Date_creation DATE,
	Date_modification DATE
);
CREATE TRIGGER backup
BEFORE DELETE ON Produits FOR EACH ROW 
INSERT INTO backup_produit (Libelle, Prix_achat, Prix_vente, Date_creation, Date_modification) VALUES
(OLD.Libelle, OLD.Prix_achat, OLD.Prix_vente, OLD.Date_creation, OLD.Date_modification);

/* etape 22 */
CREATE TRIGGER uptime
BEFORE UPDATE ON Categories FOR EACH ROW
SET NEW.Date_modification = NOW();

/* etape 23 */
DELIMITER |
CREATE TRIGGER insert_prod
BEFORE INSERT ON Produits FOR EACH ROW
BEGIN
	IF NEW.Prix_vente > 1.50 THEN
	SET NEW.Prix_vente = 1.50;
	END IF;
END |

CREATE TRIGGER modif_prod
BEFORE INSERT ON Produits FOR EACH ROW
BEGIN
	IF NEW.Prix_vente > 1.50 THEN
	SET NEW.Prix_vente = 1.50;
	END IF;
END |
DELIMITER;

/* etape 24 */
DROP TRIGGER backup;
DROP TRIGGER uptime;
DROP TRIGGER insert_prod;
DROP TRIGGER modif_prod;