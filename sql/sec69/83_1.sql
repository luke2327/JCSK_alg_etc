-- 문제 1 아래의 <요구사항>을 만족하는 테이블 <patient>를 정의하는 SQL문을 작성하시오
-- <요구사항>
-- + id(문자 5), name(문자 10), sex(문자 1), phone(문자 20)속성을 가진다
-- + id 속성은 기본키이다
-- + sex 속성은 f 또는 m 값만 갖도록 한다(제약조건명 : sex_ck)
-- + id는 <doctor> 테이블에 있는 doc_id 를 참조한다(제약조건명 : id_fk)

CREATE TABLE patient (
    id CHAR(5),
    `name` CHAR(10),
    sex CHAR(1)
    phone CHAR(20),
    PRIMARY KEY(id),
    CONSTRAINT id_fk FOREIGN KEY (id) REFERENCES doctor(doc_id),
    CONSTRAINT sex_ck CHECK(sex = 'f' OR sex = 'm')
);