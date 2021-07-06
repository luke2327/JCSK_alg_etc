CREATE DOMAIN 직위 VARCHAR2(10)
DEFAULT '사원'
CONSTRAINT VALID-직위 CHECK(VALUE IN ('사원', '대리', '과장','부장', '이사', '사장'));