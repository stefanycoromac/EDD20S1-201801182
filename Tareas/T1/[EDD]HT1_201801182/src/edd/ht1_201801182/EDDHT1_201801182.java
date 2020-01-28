/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edd.ht1_201801182;

import java.util.Scanner;

/**
 *
 * @author COROMAC HUEZO
 */
public class EDDHT1_201801182 {

    
    public static void main(String[] args) {
        System.out.println(" Stefany Samantha Abigail Coromac Huezo"
                + " \n Carnet: 201801182");
        System.out.println("  --------------------------- ");
        System.out.println("           TAREA # 1 ");
        System.out.println("  --------------------------- ");
        Matriz();              
    }
    
    private static void Matriz(){
       System.out.println("Ingrese numero de filas y columnas para una matriz cuadrada");
        Scanner entrada = new Scanner(System.in); 
        int m = entrada.nextInt(); 
        if (m == 0 || m < 0) {
            System.out.println("----- Error solo numeros enteros positivos -----");
            Matriz(); 
        }else{
        int[][] matriz = new int[m][m]; 
        
        for (int i = 0; i < m; i++) {
            matriz[0][i] = 1; 
            matriz[i][0] = 1; 
            matriz[m-1][i] = 1; 
            matriz[i][m-1] = 1; 
        }
        
        for (int x=0; x < matriz.length; x++) {
        System.out.print("|");
          for (int y=0; y < matriz[x].length; y++) {
            System.out.print (matriz[x][y]);
            if (y!=matriz[x].length-1){
               System.out.print("\t");
            }
          }
        System.out.println("|");
        }
        }
        
    }
}
