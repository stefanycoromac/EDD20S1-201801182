# ESPECIFICACION INFORMAL DE "MONEDA" 

##  Metodos 

### crea(nombre: string, valor:entero) devuelve()
	requerimientos: 
	efectos: crea una nueva moneda con un respectivo arreglo de dueños de la moneda. 

### contar() devuelve(entero)
	requerimientos: moneda existente. 
	efectos: devuelve la cantidad de la moneda requerida.

### transferencia(duenio:String) devuelve()
	requerimientos: nombre del dueño a agregar moneda. 
	efectos: Agrega una moneda al dueño. 

### duenioMonedas(duenios: String) devuelve(string)
	requerimientos: nombre de un dueño. 
	efectos: devulve la cantidad de monedas del dueño requerido. 

### transferenciaDuenios(duenioEmisor: string, duenioReceptor: string) devuelve()
	requerimientos: nombre del dueño emisor de la transferencia y nombre de dueño receptor. 
	efectos: realiza una transferencia de la moneda entre los dueños. 


