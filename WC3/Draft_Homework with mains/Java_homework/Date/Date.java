public class Date {
    private int day;
    private int month;
    private int year;
    
    public void validate(int day, int month, int year) throws InvalidDateException {
        int[] daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ) {
            daysInMonth[1] = 29;
        }
        if ( day < 1 || month < 1 || year < 1 ) {
            throw new InvalidDateException("day, month or year cannot be < 1.");
        }
        if ( month > 12 ) {
            throw new InvalidDateException("There are only 12 month in year.");
        }
        if ( day > daysInMonth[month-1] ) {
            throw new InvalidDateException("There are not so many days in this month.");
        }
        if ( year > 300000000 ) {
            throw new InvalidDateException("Are you going to live forever?");
        }
    }
    
    public Date(int day, int month, int year) throws InvalidDateException {
        System.out.println("you entered: " + day + "." + month + "." + year + ".");
        try {
            validate(day,month,year);
        } catch (InvalidDateException e) {
            System.out.println(e);
            this.day = 1;
            this.month = 1;
            this.year = 1970;
            return;
        }
        this.day = day;
        this.month = month;
        this.year = year;
    }
    
    public int getDay() {
        return this.day;
    }
    public int getMonth() {
        return this.month;
    }
    public int getYear() {
        return this.year;
    }
    
    public String toString() {
        return this.day + "." + this.month + "." + this.year;
    }
    
    
}

