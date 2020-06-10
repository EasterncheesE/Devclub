
enum MONTHS {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int getDays(int month) {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days[month];
    };



class InvalidDate {
    public:
        std::string text;
        InvalidDate(const std::string& text) : text(text) { {
            std::cout "Invalid date" << std::endl;
        }}
};

class Date {
    private:
        int day;
        int month;
        int year;

        void validate(int day, int month, int year) {
            if ( day < 1 || month < 1 || year < 1 ) {
                throw InvalidDate()
            }
            
        }
    public:
        Date(int day, int month, int year) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        ~Date() {}

        int getDay() const {
            return this->day;
        }
        int getMonth() const {
            return this->month;
        }
        int getYear() const {
            return this->year;
        }
};

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.day << "." << date.month << "." << date.year;
    return out;
}
