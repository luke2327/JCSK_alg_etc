-- 문제 5 <Student> 테이블의 ssn 속성에 대해, 중복을 허용하지 않도록 Stud_idx 라는 이름으로 오름차순 인덱스를 정의하시오

CREATE UNIQUE INDEX Stud_idx
ON Student(ssn ASC);