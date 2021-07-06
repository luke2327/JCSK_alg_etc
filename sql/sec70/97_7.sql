SELECT 이름, 전공, 신청과목 FROM 학생정보, 신청정보
WHERE 학생정보.학번 = 신청정보.학번 AND
        신청과목 = 'JAVA'
GROUP BY 이름, 전공, 신청과목
HAVING 전공 = '컴퓨터공학';