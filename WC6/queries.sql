-- CREATE ROLE shop LOGIN CREATEDB PASSWORD 'shop';
-- CREATE USER shop LOGIN CREATEDB PASSWORD 'shop';
-- CREATE DATABASE shop WITH OWNER=shop ENCODING='UTF8';

-- DROP TABLE IF EXISTS "category";
CREATE TABLE IF NOT EXISTS "category"  (
    id SERIAL PRIMARY KEY NOT NULL,
    title VARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE IF NOT EXISTS "item" (
    id SERIAL PRIMARY KEY NOT NULL,
    category_id INTEGER NOT NULL,
    title VARCHAR(100) NOT NULL,
    price NUMERIC(8, 2) NOT NULL DEFAULT 9.99
);

INSERT INTO "category" (title) VALUES ('smartphones'), ('tablets'), ('trackers');
INSERT INTO "item" (category_id, title, price) VALUES
(1, 'iPhone', 1), (1, 'OnePlus', 1),
(3, 'iWatch', 1),
(2, 'iPad', 1);

UPDATE item
    SET price = 3.5
    WHERE id = 3;

-- INSERT INTO "item" (category_id, item_title) VALUES (15, 'Microwave oven');

-- SELECT
--     "item".item_id,
--     "item".item_title,
--     "item".category_id,
--     "category".category_title,
--     "item".item_price    
-- FROM "item" 
--     JOIN "category"
--     ON "item".category_id = "category".category_id;


-- SELECT
--     i.item_id,
--     i.item_title,
--     i.category_id,
--     c.category_title,
--     i.item_price    
-- FROM "item" as i 
--     JOIN "category" AS c
--     ON i.category_id = c.category_id;

-- SELECT * FROM "item" JOIN "category" ON "item".category_id = "category".category_id;

-- SELECT * FROM "item" NATURAL JOIN "category";


CREATE TABLE IF NOT EXISTS "category"  (
    id SERIAL PRIMARY KEY NOT NULL,
    title VARCHAR(100) NOT NULL UNIQUE
);


-- category_id INTEGER NOT NULL DEFAULT 1 REFERENCES "category" (id) ON DELETE SET DEFAULT,
-- category_id INTEGER REFERENCES "category" (id) ON DELETE SET NULL,
CREATE TABLE IF NOT EXISTS "item" (
    id SERIAL PRIMARY KEY NOT NULL,
    category_id INTEGER NOT NULL REFERENCES "category" (id) ON DELETE CASCADE,
    title VARCHAR(100) NOT NULL,
    price NUMERIC(8, 2) NOT NULL DEFAULT 9.99
);


INSERT INTO "category" (title) VALUES ('smartphones'), ('tablets'), ('trackers');
INSERT INTO "item" (category_id, title) VALUES
(1, 'iPhone'), (1, 'OnePlus'),
(3, 'iWatch'),
(2, 'iPad');

INSERT INTO "item" (category_id, title) VALUES (4, 'iPhone');

INSERT INTO "item" (category_id, title) VALUES
(1, 'Galaxy'), (1, 'Pixel'),
(3, 'iWatch2'), (3, 'iWatch3'), (3, 'iWatch4'),
(2, 'iPad2'), (2, 'iPad3'), (2, 'iPad3');

select * from item limit 1;
select * from item offset 3 limit 3;
select count(*) from item;
select * from item order by id DESC limit 3 offset 3;
select * from item where category_id = 2;
select category_id, count(category_id) from item group by category_id;
