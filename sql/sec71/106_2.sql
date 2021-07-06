-- 1
SELECT 학번, 학생.학과코드, 확과명
FROM 학생 LEFT OUTER JOIN 학과
ON 학생.학과코드 = 학과.학과코드;

-- 2
SELECT 학번, 학생.학과코드, 학과명
FROM 학생, 학과
WHERE 학생.학과코드 = 학과.학과코드(+);