public class DateMain {
    public static void main(String[] args) throws InvalidDateException {
        Date a = new Date(7,7,2020);
        
        System.out.println(a);
        
        try {
            Date b = new Date(-5,-5,-5);
        } catch (InvalidDateException e) {
            System.out.println(e);
        }
    }
}