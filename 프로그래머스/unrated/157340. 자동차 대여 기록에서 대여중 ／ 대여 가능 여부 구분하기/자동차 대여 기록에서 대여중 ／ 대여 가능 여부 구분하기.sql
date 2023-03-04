SELECT CAR_ID, CASE WHEN AP = 0 THEN '대여 가능'ELSE '대여중' END AS AVAILABILITY 
FROM (
    SELECT CAR_ID, SUM(P) AS AP 
    FROM (
        SELECT CAR_ID, START_DATE, END_DATE,
        CASE WHEN TO_DATE('20221016','YYYY-MM-DD') BETWEEN START_DATE AND END_DATE
        THEN 1 ELSE 0 END AS P
        FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY)
    GROUP BY CAR_ID
)ORDER BY 1 DESC