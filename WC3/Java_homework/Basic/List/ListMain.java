//Переписать через отдельный класс. 

import java.util.*;

public class ListMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        ArrayList<Integer> aList = new ArrayList<Integer>();
        ArrayList<Integer> bList = new ArrayList<Integer>();
        int size = 10;
        int temp = 15;
        
        for ( int i = 0; i < size; i++ ) {
            aList.add(size-i);
            bList.add(i+1);
        }
        System.out.println("Array size = " + aList.size());
        System.out.println("Array = " + aList);
        
        aList.remove(5);
        aList.trimToSize();
        System.out.println("Array = " + aList);
        aList.add(5,5);
        System.out.println("Array = " + aList);
        System.out.println("Index of 7 in list: " + aList.indexOf(7));
        
        aList.add(5);
        System.out.println("Array = " + aList);
        aList.remove(aList.size()-1);
        System.out.println("Array = " + aList);
        Collections.sort(aList);
        System.out.println("Array = " + aList);
        
        System.out.println("ArrayA = " + aList);
        System.out.println("ArrayB = " + bList);
        if (aList.equals(bList)) {
            System.out.println("Yes, they are equal");
        } else {
            System.out.println("Not, they are not equal");
        }
        
        Collections.sort(aList);
    }
}