
public class CameraActivity extends AppCompatActivity implements TextureView.SurfaceTextureListener {
    static {
        System.loadLibrary("native-lib"); 
    }

    private native void processFrame(byte[] frameData, int width, int height);

    private CameraDevice cameraDevice;
    private TextureView textureView;

 
}
