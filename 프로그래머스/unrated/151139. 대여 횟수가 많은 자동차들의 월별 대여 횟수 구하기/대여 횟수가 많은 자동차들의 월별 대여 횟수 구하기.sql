-- 코드를 입력하세요
SELECT TO_NUMBER(TO_CHAR(start_date, 'MM')) as MONTH, CAR_ID, COUNT(*) as RECORDS
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
WHERE car_id in ( SELECT car_id
                    FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
                    WHERE TO_CHAR(start_date, 'YYYYMM') BETWEEN '202208' AND '202210'
                    GROUP BY car_id
                    HAVING COUNT(car_id) > 4)
AND TO_CHAR(start_date, 'YYYYMM') BETWEEN '202208' AND '202210'
GROUP BY TO_CHAR(start_date, 'MM'), CAR_ID
HAVING COUNT(*) != 0
ORDER BY MONTH, car_id DESC
