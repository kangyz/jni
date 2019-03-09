import com.alex.Divide;
import com.alex.ParamIn;
import com.alex.ParamOut;

public class Test {
    public static void main(String[] args) {
        int a = 11;
        int b=12;

        ParamIn in = new ParamIn();
        in.a.set(a);
        in.b.set(b);

        ParamOut out = new ParamOut();

        Divide.divide(in.address(),out.address());
    }
}
