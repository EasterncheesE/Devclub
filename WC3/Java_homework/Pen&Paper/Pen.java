public class Pen {
    private int inkAmount;
    private int inkCapacity;

    public Pen(int inkCapacity) {
        this.inkAmount = inkCapacity;
        this.inkCapacity = inkCapacity;
    }

    public Pen() {
        this(1024); // call Pen(int)
    }

    public int getInkAmount() {
        return this.inkAmount;
    }
    public int getInkCapacity() {
        return this.inkCapacity;
    }

    public void write(Paper paper, String message) throws OutOfInkException, OutOfSpaceException {
        if ( this.inkAmount == 0 ) {
            throw new OutOfInkException();
        }
        if ( message.length() > this.inkAmount ) {
            paper.addContent(message.substring(0, this.inkAmount));
            this.inkAmount = 0;
            return;
        }
        paper.addContent(message);
        this.inkAmount -= message.length();
    }
    public void refill() {
        this.inkAmount = this.inkCapacity;
    }
}