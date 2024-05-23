# Laboratorio 8, IE-0207, Andrés Bonilla Vega, B81220.

En este laboratorio se trabajó con diferentes comandos de SQL en modo de práctica en línea para el curso.

Andrés Bonilla Vega
# 1. Write a query to find the first_name, last name and birth date of patients who has height greater than 160 and weight greater than 70  

```
SELECT first_name,last_name, birth_date
FROM patients
WHERE (height > 160 and weight > 70)
```

# 2. Write a query to find list of patients first_name, last_name, and allergies where allergies are not null and are from the city of 'Hamilton'  

```
SELECT first_name,last_name, allergies
FROM patients
WHERE allergies IS NOT NULL and city = 'Hamilton';
```

# 3.Show unique birth years from patients and order them by ascending.  

```
SELECT DISTINCT YEAR (birth_date) FROM patients
ORDER BY YEAR (birth_date) ASC;
```

# 4. Show unique first names from the patients table which only occurs once in the list.   
For example, if two or more people are named 'John' in the first_name column then don't include their name in the output list. If only 1 person is named 'Leo' then include them in the output.  

```
SELECT first_name
FROM patients
GROUP BY first_name
HAVING COUNT(*) = 1;
```


Ismael Jiménez Carballo

# 1. Show the patient id and the total number of admissions for patient_id 579.  

```
SELECT patient_id, count (patient_id = 579)
FROM admissions
where patient_id is 579;
```

# 2. Based on the cities that our patients live in, show unique cities that are in province_id 'NS'?  
```
SELECT DISTINCT(city) AS unique_cities
FROM patients
where province_id = 'NS';
```

# 3. Show unique birth years from patients and order them by ascending.  
```
SELECT DISTINCT YEAR(birth_date) AS birth_year
FROM patients
ORDER BY birth_year ASC;
```

# 4. Show unique first names from the patients table which only occurs once in the list.  
For example, if two or more people are named 'John' in the first_name column then don't include their name in the output list. If only 1 person is named 'Leo' then include them in the output.  
```
SELECT first_name
FROM patients
GROUP BY first_name
HAVING COUNT(first_name) = 1;
```

José Pablo Laurent  
```
-- Selecciona la columna 'province_name' de la tabla 'province_names'
select province_name
from province_names
-- Ordena los resultados según los siguientes criterios:
order by
  -- Primer criterio de ordenamiento: Si 'province_name' es 'Ontario', asigna 0, de lo contrario, asigna 1.
  -- Esto asegura que 'Ontario' siempre aparezca primero en la lista.
  (case when province_name = 'Ontario' then 0 else 1 end),
  -- Segundo criterio de ordenamiento: Ordena alfabéticamente los nombres de las provincias.
  province_name;

-- Selecciona el ID del doctor, concatenación del nombre y apellido, especialidad,
-- año de la fecha de admisión y el total de admisiones
SELECT
  d.doctor_id as doctor_id,  -- Selecciona y asigna un alias 'doctor_id' para el ID del doctor
  CONCAT(d.first_name,' ', d.last_name) as doctor_name,  -- Concatena el nombre y apellido del doctor y asigna un alias 'doctor_name'
  d.specialty,  -- Selecciona la especialidad del doctor
  YEAR(a.admission_date) as selected_year,  -- Extrae el año de la fecha de admisión y asigna un alias 'selected_year'
  COUNT(*) as total_admissions  -- Cuenta el número total de admisiones y asigna un alias 'total_admissions'
FROM doctors as d
  LEFT JOIN admissions as a ON d.doctor_id = a.attending_doctor_id  -- Realiza un LEFT JOIN entre la tabla 'doctors' y 'admissions' usando 'doctor_id'
GROUP BY
  doctor_name,  -- Agrupa los resultados por el nombre del doctor
  selected_year  -- Agrupa los resultados por el año seleccionado
ORDER BY doctor_id, selected_year;  -- Ordena los resultados por el ID del doctor y el año seleccionado

-- Selecciona el nombre de la provincia
SELECT pr.province_name
FROM patients AS pa  -- De la tabla 'patients' con el alias 'pa'
  JOIN province_names AS pr ON pa.province_id = pr.province_id  -- Realiza un JOIN entre 'patients' y 'province_names' usando 'province_id'
GROUP BY pr.province_name  -- Agrupa los resultados por el nombre de la provincia
HAVING
  -- Filtra los grupos para incluir solo aquellos donde la cuenta de pacientes masculinos es mayor que la de pacientes femeninos
  COUNT(CASE WHEN gender = 'M' THEN 1 END) > COUNT(CASE WHEN gender = 'F' THEN 1 END);
  -- La cláusula HAVING compara el número de pacientes masculinos (M) con el número de pacientes femeninos (F) por provincia

  -- Selecciona la fecha de admisión, el total de admisiones por día y el cambio en el conteo de admisiones respecto al día anterior
SELECT
  admission_date,  -- Selecciona la fecha de admisión
  count(admission_date) as admission_day,  -- Cuenta las admisiones por fecha y asigna un alias 'admission_day'
  -- Calcula el cambio en el número de admisiones comparado con el día anterior
  count(admission_date) - LAG(count(admission_date)) OVER(ORDER BY admission_date) AS admission_count_change
FROM admissions  -- De la tabla 'admissions'
GROUP BY admission_date;  -- Agrupa los resultados por la fecha de admisión
```
