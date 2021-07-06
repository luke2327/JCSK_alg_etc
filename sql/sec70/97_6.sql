SELECT 학생정보.학번, 학생정보.이름, 결제.결제여부 FROM 결제, 학생정보, 신청정보
WHERE 학생정보.학번 = 신청정보.학번 AND
        신청정보.신청번호 = 결제.신청번호 AND
        신청정보.신청과목 = 'OpenGL';