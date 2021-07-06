-- 1
SELECT 이름, 학과명 AS 학과
FROM 학생, 학과
WHERE 학생.학과코드 = 학과.학과코드;

-- 2
SELECT 이름, 학과명 AS 학과
FROM 학생 NATURAL JOIN 학과 

-- 3
SELECT 이름, 학과명 AS 학과
FROM 학생 JOIN 학과 USING(학과코드);