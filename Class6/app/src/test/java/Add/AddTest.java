package Add;

import java.math.BigInteger;
import static org.junit.Assert.assertEquals;
import org.junit.Test;
import Add.Add;

public class AddTest {

    @Test
    public void testAddPositiveNumbers() {
        BigInteger result = Add.add(2, 3);
        assertEquals(new BigInteger("5"), result);
    }

    @Test
    public void testAddNegativeNumbers() {
        BigInteger result = Add.add(-2, -3);
        assertEquals(new BigInteger("-5"), result);
    }

    @Test
    public void testAddOposite() {
        BigInteger result = Add.add(Integer.MAX_VALUE, Integer.MIN_VALUE);
        assertEquals(new BigInteger("-1"), result);
    }

    @Test
    public void testOverInt() {
        BigInteger result = Add.add(Integer.MAX_VALUE, 1);
        assertEquals(new BigInteger("2147483648"), result);
    }

    @Test
    public void testIputOverInt() {
        BigInteger result = Add.add(Integer.MIN_VALUE, -1);
        assertEquals(new BigInteger("-2147483649"), result);
    }

    @Test
    public void testNegativeInt() {
        BigInteger result = Add.add(Integer.MIN_VALUE, -1);
        assertEquals(new BigInteger("-2147483649"), result);
    }
    // 他のテストケースをこちらに追加...
}
