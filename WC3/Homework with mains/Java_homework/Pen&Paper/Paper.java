public class Paper {
    private StringBuffer content;
    private int maxSymbols;

    public Paper(int maxSymbols) {
        this.maxSymbols = maxSymbols;
        this.content = new StringBuffer();
    }

    public Paper() {
        this(4096); // call Paper(int)
    }

    public int getMaxSymbols() {
        return this.maxSymbols;
    }

    public void addContent(String message) throws OutOfSpaceException {
        int total = this.content.length() + message.length();

        if ( this.content.length() == this.maxSymbols ) {
            throw new OutOfSpaceException();
        }
        if ( total > this.maxSymbols ) {
            content.append(message.substring(0, this.maxSymbols - content.length()));
            return;
        }
        this.content.append(message);
    }
    public void show() {
        System.out.println(this.content);
    }
}