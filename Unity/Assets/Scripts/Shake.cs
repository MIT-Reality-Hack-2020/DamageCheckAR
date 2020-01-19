using UnityEngine;
using System.Collections;
 
public class ShakeScript : MonoBehaviour
{
    public float shakeStrength = .1f;
    public float shakeDecay = 0.005f;
 
    float shake_decay;
    float shake_intensity;
 
    Vector3 originPosition;
    Quaternion originRotation;
    Transform _transform;
 
    //Temporary button for testing
    void OnGUI()
    {
        if (GUI.Button(new Rect(20, 40, 80, 20), "Shake"))
        {
            Shake();
        }
    }
 
    void OnEnable()
    {
        _transform = transform;
    }
 
    IEnumerator ShakeIt()
    {
        while(shake_intensity > 0f)
        {
            print ("f");
            _transform.localPosition = originPosition + Random.insideUnitSphere * shake_intensity;
            _transform.localRotation = new Quaternion(
                originRotation.x + Random.Range(-shake_intensity, shake_intensity) * .2f,
                originRotation.y + Random.Range(-shake_intensity, shake_intensity) * .2f,
                originRotation.z + Random.Range(-shake_intensity, shake_intensity) * .2f,
                originRotation.w + Random.Range(-shake_intensity, shake_intensity) * .2f);
            shake_intensity -= shakeDecay;
            yield return null;
        }
 
        ShakingStopped();
 
        yield return null;
    }
 
    void ShakingStopped()
    {
        _transform.localPosition = originPosition;
        _transform.localRotation = originRotation;
    }
 
    public void Shake()
    {
        originPosition = _transform.localPosition;
        originRotation = _transform.localRotation;
 
        shake_intensity = shakeStrength;
        StartCoroutine("ShakeIt");
    }
}