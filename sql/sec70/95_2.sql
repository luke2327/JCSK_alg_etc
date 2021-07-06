SELECT name FROM Shop
WHERE id IN (
    SELECT shopid FROM Staff WHERE id = 10
);