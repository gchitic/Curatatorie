--ARTICOLE

INSERT INTO ARTICOL(DENUMIRE,PRET) VALUES (:DENUMIRE,:PRET)

UPDATE ARTICOL SET DENUMIRE=:DENUMIRE,PRET=:PRET
WHERE ARTICOL_ID=:ARTICOL_ID

UPDATE ARTICOL SET DENUMIRE='PANTALONi',PRET=30
WHERE ARTICOL_ID=1

DELETE FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID

SELECT * FROM ARTICOL

--MATERIALE

INSERT INTO MATERIAL(DENUMIRE,PRET)
VALUES(:DENUMIRE,:PRET)

UPDATE MATERIAL SET DENUMIRE=:DENUMIRE,PRET=:PRET
WHERE MATERIAL_ID=:MATERIAL_ID

DELETE FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID

SELECT * FROM MATERIAL


--SERVICII
INSERT INTO SERVICII(DENUMIRE,PRET)
VALUES(:DENUMIRE,:PRET)

DELETE FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID

DELETE FROM SERVICII WHERE DENUMIRE=:DENUMIRE

UPDATE SERVICII SET DENUMIRE='calcate',PRET=31
WHERE SERVICIU_ID=5

UPDATE SERVICII SET DENUMIRE=:DENUMIRE,PRET=:PRET
WHERE SERVICIU_ID=:SERVICIU_ID

SELECT * FROM SERVICII
SELECT * FROM SERVICII WHERE SERVICIU_ID=2

--Comanda
SELECT * FROM COMANDA

INSERT INTO COMANDA(CLIENT_ID,OPERATOR_ID,SERVICIU1_ID,ARTICOL1_ID,MATERIAL1_ID,ACTIV,SUMA_TOTAL)
VALUES(2,2,2,1,3,0,200.14)

SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL
FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID
WHERE C.ACTIV = 1

SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL
FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID
WHERE CL.NUME = :NUME OR CL.PRENUME = :PRENUME

SELECT *
FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID
				INNER JOIN OPERATOR O ON O.OPERATOR_ID = C.OPERATOR_ID
				INNER JOIN SERVICII S1 ON C.SERVICIU1_ID = S1.SERVICIU_ID
				INNER JOIN SERVICII S2 ON C.SERVICIU2_ID = S2.SERVICIU_ID
				INNER JOIN SERVICII S3 ON C.SERVICIU3_ID = S3.SERVICIU_ID
				INNER JOIN SERVICII S4 ON C.SERVICIU4_ID = S4.SERVICIU_ID
				INNER JOIN SERVICII S5 ON C.SERVICIU5_ID = S5.SERVICIU_ID
				INNER JOIN ARTICOL A1 ON C.ARTICOL1_ID = A1.ARTICOL_ID
				INNER JOIN ARTICOL A2 ON C.ARTICOL2_ID = A2.ARTICOL_ID
				INNER JOIN ARTICOL A3 ON C.ARTICOL3_ID = A3.ARTICOL_ID
				INNER JOIN ARTICOL A4 ON C.ARTICOL4_ID = A4.ARTICOL_ID
				INNER JOIN ARTICOL A5 ON C.ARTICOL5_ID = A5.ARTICOL_ID
				INNER JOIN MATERIAL M1 ON C.MATERIAL1_ID = M1.MATERIAL_ID
				INNER JOIN MATERIAL M2 ON C.MATERIAL2_ID = M2.MATERIAL_ID
				INNER JOIN MATERIAL M3 ON C.MATERIAL3_ID = M3.MATERIAL_ID
				INNER JOIN MATERIAL M4 ON C.MATERIAL4_ID = M4.MATERIAL_ID
				INNER JOIN MATERIAL M5 ON C.MATERIAL5_ID = M5.MATERIAL_ID
				INNER JOIN CEC ON C.CEC_ID = CEC.CEC_ID

INSERT INTO COMANDA(CLIENT_ID,OPERATOR_ID,
					SERVICIU1_ID,SERVICIU2_ID,SERVICIU3_ID,SERVICIU4_ID,SERVICIU5_ID,
					ARTICOL1_ID,ARTICOL2_ID,ARTICOL3_ID,ARTICOL4_ID,ARTICOL5_ID,
					MATERIAL1_ID,MATERIAL2_ID,MATERIAL3_ID,MATERIAL4_ID,MATERIAL5_ID,
					COMENTARIU1,COMENTARIU2,COMENTARIU3,COMENTARIU4,COMENTARIU5,
					PRET1,PRET2,PRET3,PRET4,PRET5,
					ACTIV,ACHITAT,DATORIE,SUMA_TOTAL)
VALUES(:CLIENT_ID,:OPERATOR_ID,
		:SERVICIU1_ID,:SERVICIU2_ID,:SERVICIU3_ID,:SERVICIU4_ID,:SERVICIU5_ID,
		:ARTICOL1_ID,:ARTICOL2_ID,:ARTICOL3_ID,:ARTICOL4_ID,:ARTICOL5_ID,
		:MATERIAL1_ID,:MATERIAL2_ID,:MATERIAL3_ID,:MATERIAL4_ID,:MATERIAL5_ID,
		:COMENTARIU1,:COMENTARIU2,:COMENTARIU3,:COMENTARIU4,:COMENTARIU5,
		:PRET1,:PRET2,:PRET3,:PRET4,:PRET5,
		:ACTIV,:ACHITAT,:DATORIE,:SUMA_TOTAL)

INSERT INTO COMANDA(CLIENT_ID,OPERATOR_ID,
					SERVICIU1_ID,SERVICIU2_ID,SERVICIU3_ID,SERVICIU4_ID,SERVICIU5_ID,
					ARTICOL1_ID,ARTICOL2_ID,ARTICOL3_ID,ARTICOL4_ID,ARTICOL5_ID,
					MATERIAL1_ID,MATERIAL2_ID,MATERIAL3_ID,MATERIAL4_ID,MATERIAL5_ID,
					COMENTARIU1,COMENTARIU2,COMENTARIU3,COMENTARIU4,COMENTARIU5,
					PRET1,PRET2,PRET3,PRET4,PRET5,
					ACTIV,ACHITAT,DATORIE,SUMA_TOTAL,DATA_LUCRU,DATA_RETURN)
VALUES(1,1,
		2,3,NULL,2,NULL,
		1,1,1,NULL,2,
		3,NULL,4,4,4,
		'DSDFSD',NULL,NULL,'DSDS',NULL,
		12,23,121,32,21,
		0,21,12,33,'08-06-2022','08-09-2022')

SELECT * FROM COMANDA
SELECT * FROM CLIENT
SELECT * FROM OPERATOR
SELECT * FROM SERVICII
SELECT * FROM ARTICOL
SELECT * FROM MATERIAL

SELECT * FROM COMANDA 

UPDATE COMANDA SET CLIENT_ID=:CLIENT_ID,OPERATOR_ID=:OPERATOR_ID,ACTIV=:ACTIV,ACHITAT=:ACHITAT,DATORIE=:DATORIE,SUMA_TOTAL=:SUMA_TOTAL,
					SERVICIU1_ID=:SERVICIU1_ID,ARTICOL1_ID=:ARTICOL1_ID,MATERIAL1_ID=:MATERIAL1_ID,COMENTARIU1=:COMENTARIU1,PRET1=:PRET1
WHERE COMANDA_ID=:COMANDA_ID


INSERT INTO OPERATOR(NUME,PRENUME,FUNCTIA,USERNAME,PASS,COD,TIP_ACCES)
VALUES(:NUME,:PRENUME,:FUNCTIA,:USERNAME,:PASS,:COD,:TIP_ACCES)

SELECT * FROM OPERATOR