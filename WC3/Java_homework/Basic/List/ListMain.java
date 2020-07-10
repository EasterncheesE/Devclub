//Добавить сортировку.

import java.util.*;

public class ListMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        List<Integer> aList = new ArrayList<Integer>();
        int size = 10;
        int temp = 15;
        
        // for ( int i = 0; i < size; i++ ) {
        //     aList.add(i);
        // }
        
        // aList.add(15);
        // System.out.println("Array size = " + aList.size());
        // System.out.println("Array = " + aList);
        
        aList.remove(1);
        System.out.println("Array size = " + aList.size());
        System.out.println("Array = " + aList);
        
        aList.remove(new Integer(3));
        System.out.println("Array = " + aList);
        System.out.println("Array size = " + aList.size());
        
        System.out.println("Number 15 pos = " +aList.indexOf(15));
    }
}