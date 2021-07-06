SELECT sum(psale) FROM Sale
WHERE pid IN (
    SELECT id FROM Product
    WHERE name LIKE "USB%"
);