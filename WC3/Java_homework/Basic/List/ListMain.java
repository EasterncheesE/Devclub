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
            bList.add(i);
        }
        System.out.println("Array size = " + aList.size());
        System.out.println("Array = " + aList);
        
        aList.remove(5);
        aList.trimToSize();
        
        aList.add(5,5);
        
        aList.indexOf(5);
        
        aList.add(5);
        
        aList.remove(aList.size()-1);
        
        Collections.sort(aList);
        
        if (aList.equals(bList)) {
            System.out.println("Yes, they are equal");
        } else {
            System.out.println("Not, they are not equal");
        }
        
        
        // try {
        //  aList.remove(1);
        // } catch (IndexOutOfBoundsException e) {
        //     System.out.println("Array doesn't have this index.");
        // }
        
        Collections.sort(aList);
    }
}