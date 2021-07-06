-- 문제 3 아래의 <요구사항>을 만족하는 테이블 <Instructor>를 정의하는 SQL문을 작성하시오
-- <요구사항>
-- + id(문자 5), name(문자 15), dept(문자 15)속성을 가진다
-- + id 속성은 기본키이다
-- + id 와 name 속성은 Null이 올 수 없다
-- + dept 속성은 <Department> 테이블의 name 속성을 참조하는 외래키이다
-- ++ <Department> 테이블에서 튜플이 삭제되면 관련된 모든 튜플의 dept 속성의 값은 NULL로 변경되어야 한다
-- ++ <Department> 테이블의 dept 속성이 변경되면 <Instructor> 테이블의 관련된 모든 속성 값도 같은 값으로 변경되어야 한다

CREATE TABLE Instructor (
    id CHAR(5) NOT NULL,
    name CHAR(15) NOT NULL,
    dept CHAR(15),
    FOREIGN KEY (dept) REFERENCES Department(name)
        ON DELETE SET NULL
        ON UPDATE CASCADE
)