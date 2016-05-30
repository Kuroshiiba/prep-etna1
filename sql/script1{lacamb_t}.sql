CREATE DATABASE DOGAT_lacamb_t CHARACTER SET 'utf8';

CREATE TABLE `Utilisateurs`
(
    ID INT(10) unsigned NOT NULL AUTO_INCREMENT, 
    Nom VARCHAR(30),
    Prenom VARCHAR(30),
    Date_de_naissance DATE,
    Ville VARCHAR(50),
    Adresse VARCHAR(20),
    Code_postale VARCHAR(5),
    Pays VARCHAR(15),
    Sexe VARCHAR(10),
    Rôle INT(10) unsigned,
    Date_creation DATE,
    Date_modification DATE,
    PRIMARY KEY (ID),
    CONSTRAINT ID_Role FOREIGN KEY (Rôle) REFERENCES Rôle(ID)
);

CREATE TABLE `Rôle`
(
    ID INT(10) unsigned NOT NULL AUTO_INCREMENT,
    Libelle VARCHAR(100),
    Description VARCHAR(100),
    Date_creation DATE,
    Date_modification DATE,
    PRIMARY KEY (ID)
);

CREATE TABLE `Produits`
(
    ID INT(10) unsigned NOT NULL AUTO_INCREMENT,
    Libelle VARCHAR(100),
    Description VARCHAR(100),
    Prix_achat VARCHAR(6),
    Prix_vente VARCHAR(6),
    Nombres_produit INT(25),
    Date_creation DATE,
    Date_modification DATE,
    PRIMARY KEY (ID)
);

CREATE TABLE `Categories`
(
    ID INT(10) unsigned NOT NULL AUTO_INCREMENT,
    Libelle VARCHAR(100),
    Description VARCHAR(100),
    Date_creation DATE,
    Date_modification DATE,
    PRIMARY KEY (ID)
);

CREATE TABLE `Categorie_Produit`
(
    ID_categorie INT(10) unsigned,
    ID_produit INT(10) unsigned,
    PRIMARY KEY (ID_categorie,ID_produit),
    CONSTRAINT ID_categorie FOREIGN KEY (ID_categorie) REFERENCES Categories(ID),
    CONSTRAINT ID_produit FOREIGN KEY (ID_produit) REFERENCES Produits(ID)
);

CREATE TABLE `Produit_Utilisateur`
(
    ID_produit INT(10) unsigned,
    ID_utilisateur INT(10) unsigned,
    PRIMARY KEY (ID_produit,ID_utilisateur),
    CONSTRAINT ID_prod FOREIGN KEY (ID_produit) REFERENCES Produits(ID),
    CONSTRAINT ID_utilisateur FOREIGN KEY (ID_utilisateur) REFERENCES Utilisateurs(ID)
);

INSERT INTO `Utilisateurs`(Nom, Prenom, Date_de_naissance, Ville, Adresse, Code_postale, Pays, Sexe, Rôle, Date_creation, Date_modification) VALUES
("Ramy", "Giley", "1987-09-20", "Verdun", "13 rue du Vendredi", 75007, "France", "Masculin", 1, NOW(), NOW()),
("Jean", "Roland", "1989-11-30", "Verdun", "15 rue du Dimanche", 75007, "France", "Masculin", 1, NOW(), NOW()),
("Ambre", "Laforet", "1997-08-15", "Verdun", "17 rue du Mardi", 75007, "France", "Feminin", 3, NOW(), NOW()),
("Thibault", "Barjo", "1996-05-04", "Verdun", "18 rue du Jeudi", 75007, "France", "Masculin", 4, NOW(), NOW()),
("Louis", "Pls", "1969-10-25", "Boulogne", "69 rue du Buisson", 75007, "France", "Hermaphrodite", 3, NOW(), NOW()),
("Thomas", "Lacambra", "1986-11-30", "Inconnue", "69 rue de l'absence", 75007, "France", "Masculin", 2, NOW(), NOW()),
("Morgane", "Lasale", "1998-05-09", "Verdun", "14 rue du Samedi", 75007, "France", "Feminin", 1, NOW(), NOW()),
("Marwa", "Roland", "1989-03-26", "Verdun", "30 rue de l'ecluse", 75007, "France", "Feminin", 1, NOW(), NOW()),
("Celine", "Roland", "1989-02-14", "Verdun", "15 rue du Vendredi", 75007, "France", "Feminin", 3, NOW(), NOW()),
("Paul", "Portino", "1985-04-25", "Paris", "15 rue du Vendredi", 75007, "France", "Masculin", 3, NOW(), NOW()),
("Chloe", "Ploynet", "1998-11-30", "Nice", "30 rue Caffarelli", 06088, "France", "Masculin",  1, NOW(), NOW())

INSERT INTO `Rôle`(Libelle, Description, Date_creation, Date_modification) VALUES
("Client", "Personne qui achette des produits", NOW(), NOW()),
("PDG", "Personne ayant le plus de pouvoir", NOW(), NOW()),
("Vendeur", "Personne vendant des produits", NOW(), NOW()),
("Bras-Droit", "Personne ayant le plus de pouvoir apres le Patron", NOW(), NOW())

INSERT INTO `Produits`(Libelle, Description, Prix_achat, Prix_vente, Nombres_produit, Date_creation, Date_modification) VALUES
("Panier_chien_noir", "Panier pour chien de couleur Noir", "0.50€", "1€", "2", NOW(), NOW()),
("Panier_chien_rouge", "Panier pour chien de couleur Rouge", "0.50€", "1€", "3", NOW(), NOW()),
("Panier_chien_rose", "Panier pour chien de couleur Rose", "0.50€", "1€", "5", NOW(), NOW()),
("Panier_chat_noir", "Panier pour chat de couleur Noir", "0.70€", "1.20€", "1", NOW(), NOW()),
("Panier_chat_rouge", "Panier pour chat de couleur Rouge", "0.70€", "1.20€", "2", NOW(), NOW()),
("Panier_chat_rose", "Panier pour chat de couleur Rose", "0.70€", "1.20€", "5", NOW(), NOW()),
("Laisse_chien_noir", "Laisse pour chien de couleur Noir", "1€", "1.50€", "2", NOW(), NOW()),
("Laisse_chien_rouge", "Laisse pour chien de couleur Rouge", "1€", "1.50€", "3", NOW(), NOW()),
("Laisse_chien_rose", "Laisse pour chien de couleur Rose", "1€", "1.50€", "2", NOW(), NOW()),
("Harnet_chien_noir", "Harnet pour chien de couleur Noir", "1.50€", "1.70€", "8", NOW(), NOW()),
("Harnet_chien_rouge", "Harnet pour chien de couleur Rouge", "1.50€", "1.70€", "8", NOW(), NOW()),
("Harnet_chien_rose", "Harnet pour chien de couleur Rose", "1.50€", "1.70€", "9", NOW(), NOW()),
("Harnet_chien_vert", "Harnet pour chien de couleur Vert", "1.50€", "1.70€", "10", NOW(), NOW()),
("Litiere_chat_petite", "Grande litiere et facile à nettoyer pour votre chat", "1.50€", "2€", "5", NOW(), NOW()),
("Litiere_chat_petite", "Petite litiere tres pratique lorsque vous n'avez pas de place", "1.30€", "1.80€", "5", NOW(), NOW())

INSERT INTO `Categories`(Libelle, Description, Date_creation, Date_modification) VALUES
("Accessoires_Chiens", "Tout pour le confort de votre Chien", NOW(), NOW()),
("Accessoires_Chats", "Tout pour le confort de votre Chat", NOW(), NOW()),
("Chiens", "Parfait pour trouver un chien", NOW(), NOW())

INSERT INTO `Categorie_Produit`(ID_categorie, ID_produit) VALUES
(1, 1),
(1, 2),
(1, 3),
(1, 7),
(1, 8),
(1, 10),
(2, 4),
(2, 5),
(2, 6),
(2, 14),
(2, 15)

INSERT INTO `Produit_Utilisateur`(ID_produit, ID_utilisateur) VALUES
(1, 8),
(14, 11)