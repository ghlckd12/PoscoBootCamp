SELECT DISTINCT productName FROM products LIMIT 10, 5;

SELECT productCode, quantityOrdered AS TotalOrdered FROM orderdetails;

SELECT productCode, SUM(quantityOrdered) FROM orderdetails GROUP BY productCode;

SELECT productLine, MAX(buyPrice), MIN(buyPrice) FROM products GROUP BY productLine;

SELECT productline, AVG(buyPrice) FROM products WHERE productScale = '1:10' GROUP BY productline;

SELECT city, AVG(creditLimit) FROM customers WHERE country = 'USA' || country = 'Canada' || country = 'France' GROUP BY city;

SELECT status, COUNT(orderNumber) FROM orders WHERE orderDate >= '2003-01-01' AND orderDate <= '2005-12-31' GROUP BY status;

SELECT YEAR(orderDate), COUNT(*) FROM orders GROUP BY YEAR(orderDate) HAVING COUNT(*) > 100;

SELECT productCode, SUM(quantityOrdered) FROM orderdetails GROUP BY productCode HAVING SUM(quantityOrdered) >= 500;

SELECT country, COUNT(customerNumber) FROM customers GROUP BY country HAVING COUNT(customerNumber) >= 10;