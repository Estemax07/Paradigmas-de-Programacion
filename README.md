#Nicolas sanchez Calderon

def suc(numN):
    return numN + 1

def ant(numN):
    return numN - 1 if numN > 0 else 0  

def suma(num1, num2):
    while num2 > 0:
        num1 = suc(num1)
        num2 = ant(num2)
    return num1

def multiplicacion(num1, num2):
    resultado = 0
    while num2 > 0:
        resultado = suma(resultado, num1)
        num2 = ant(num2)
    return resultado

def division(num1, num2):
    if num2 == 0:
        return "No se puede dividir por cero"
    cociente = 0
    while num1 >= num2:
        num1 = resta(num1, num2)
        cociente = suc(cociente)
    return cociente

def resta(num1, num2):
    while num2 > 0 and num1 > 0:
        num1 = ant(num1)
        num2 = ant(num2)
    return num1

num1 = int(input("Ingrese el primer numero: "))
num2 = int(input("Ingrese el segundo numero: "))

print(" El resultado de la suma es:", suma(num1, num2))
print(" El resultado de la multiplicación es:", multiplicacion(num1, num2))
print(" El resultado de la división es:", division(num1, num2))
print(" El resultado de la resta es:", resta(num1, num2))
