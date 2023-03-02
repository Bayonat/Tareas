#Tarea1
#David Alonso Bayona Timaná
####################################################################################
####################################################################################
####################################################################################

#1er punto
mat = [[11, 23, 76, 34, 11],
[14, 30, 92, 30, 101],
[12, 45, 58, 92, 22],
[74, 56, 49, 56, 100],
[99, 5, 28, 47, 99]]

def verificarDiagonales(mat):

    diagonalPrincipal = []
    
    for i in range(len(mat[0])):
        for j in range(len(mat)):
            if i == j:
                diagonalPrincipal.append(mat[i][j])


    #Se crea una matriz con las lineas al revés
    matA = []

    for i in range(len(mat)):
       matA.append([])
       Alrevez = (mat[i])[::-1]
       for j in range(len(Alrevez)):
              matA[i].append(Alrevez[j])

    diagonalSecundaria = []

    for x in range(len(matA)):
        for y in range(len(matA[0])):

            if x == y:
                diagonalSecundaria.append(matA[x][y])

    #print(mat)
    #print(diagonalPrincipal)
    #print(matA)
    #print(diagonalSecundaria)

    #finalmente comparamos nuestras dos dos listas

    if diagonalPrincipal==diagonalSecundaria:

        return True
    else:

        return False

    
#print(verificarDiagonales(mat))

####################################################################################
####################################################################################
####################################################################################

#2do punto

capicua = [42, 12, 90, 90, 12, 42]
def esCapicua(capicua):

    #Se voltea la lista
    capicuaAlReves = capicua[::-1]
    #Se compara 
    if capicuaAlReves==capicua:

        return True
    else:

        return False

#print(esCapicua(capicua))
    
####################################################################################
####################################################################################
####################################################################################

#3er punto

listaA = [40, 10, 22, 12, 33, 33, 33]
listaB = [41, 22, 31, 15, 13, 12, 33, 19]

def diferenciaListas(x, y): 

    diferencia = []
    for i in range(len(x)):
        diferencia.append(x[i])
        if x[i] in y:
            diferencia.remove(x[i])
            y.remove(x[i])


    print(diferencia)

diferenciaListas(listaA,listaB)
diferenciaListas(listaB,listaA)

def tercerPuntoParteB():
    ejecucionesRealizar = input(int("Ejecuciones a realizar: "))
    ejecucionesRealizar = ejecucionesRealizar - 1

    for i in range(ejecucionesRealizar):
        
        contador = 0
        while contador <= 2:
            cantidadDatos= input(int("Cantidad de datos:"))
            for j in range(cantidadDatos):
                dato = input(int("Dato:"))
                dato.append([])

            contador = contador + 1

tercerPuntoParteB()


    
####################################################################################
####################################################################################
####################################################################################

#4to punto

def mostrarPrimos(cantidad):
    primos=[]
    for i in range(2, cantidad):
        primos.append(i)
        for j in range(2,i):
            if (i%j)==0:
                if i in primos:
                    primos.remove(i)

    #Creamos una segunda lista de primos para jugar con sus digitos
    sumaPrimos = []

    for i in range(2, cantidad):
      sumaPrimos.append(i)
      for j in range(2,i):
          if (i%j)==0:
              if i in sumaPrimos:
                  sumaPrimos.remove(i)

    suma = 0
    resultadoSumaPrimos = []
    for i in range(len(sumaPrimos)):
        while sumaPrimos[i]>0:
            suma = suma + (sumaPrimos[i]%10)
            sumaPrimos [i]= sumaPrimos[i]//10
            if sumaPrimos[i]==0 and suma in primos:
                resultadoSumaPrimos.append(primos[i])
                suma = 0
            if  sumaPrimos[i]==0:
                suma = 0



    print("Números primos entre 1 y 100",primos)

    print("Números entre 1 y 100 con suma de dígitos con valor primo:", resultadoSumaPrimos)


#mostrarPrimos(100)

####################################################################################
####################################################################################
####################################################################################

#5to punto

matriz = [[1, 0, 0, 0, 0, 4, 0, 5],
[0, 0, 0, 0, 0, 0, 4, 7],
[2, 2, 0, 0, 9, 0, 1, 0],
[0, 0, 0, 0, 0, 0, 0, 0],
[0, 0, 8, 1, 0, 7, 0, 0],
[0, 0, 0, 0, 0, 0, 0, 0],
[3, 0, 0, 0, 0, 6, 0, 2],
[4, 4, 7, 0, 0, 0, 0, 0],
[0, 9, 0, 8, 0, 7, 0, 6]]


def sumarValoresMatriz():
    disp = {}
    for i in range(len(matriz)):
        print(i)

        
    print(disp)

#sumarValoresMatriz()