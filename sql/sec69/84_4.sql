-- 문제 4 <요구사항>
-- Course 와 Instructor 릴레이션을 이용한다
-- Course 의 instructor 속성 값과 Instructor 의 id 속성이 같은 자료에 대한 view 를 정의한다
-- <cc> 뷰는 ccid, ccname, instname 속성을 가진다
-- <cc> 뷰는 Course 테이블의 id, name Instructor 테이블의 name 속성을 사용한다

CREATE VIEW cc(ccid, ccname, instname)
AS SELECT Course.id, Course.name, Instructor.name
    FROM Course, Instructor
    WHERE Course.instructor = Instructor.id;
