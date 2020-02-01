
package org.stefanycoromac;

import org.stefanycoromac.beans.Moneda;


public class main {

    public static void main(String[] args) {
        
        Moneda moneda1 = new Moneda("Quetzal", 1); 
        moneda1.transferencia("Juan");
        moneda1.transferencia("Juan");
        moneda1.transferencia("Pedro");
        moneda1.transferencia("Juan");
        moneda1.transferencia("Juan");
        moneda1.transferencia("Juan");
        moneda1.transferencia("Pedro");
        System.out.println(moneda1.duenioMonedas("Juan")); 
        System.out.println(moneda1.duenioMonedas("Pedro"));
        moneda1.transferenciaDuenios("Juan","Pedro");
        System.out.println(moneda1.duenioMonedas("Juan")); 
        System.out.println(moneda1.duenioMonedas("Pedro"));
        
        System.out.println(moneda1.contar());
        
        
        
        
    }
    
}
