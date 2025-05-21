public class NativeBridge {
    static {
        System.loadLibrary("native-lib");
    }

    public native void processFrame(byte[] yuvData, int width, int height);
}
