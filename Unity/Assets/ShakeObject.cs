using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShakeObject : MonoBehaviour
{
    [SerializeField] GameObject[] shakeObjects;
    [SerializeField] float shakeAmount;
    [SerializeField] float shakeDuration;

    [SerializeField] AudioSource audioData;

    public GameObject Crack1;
    public GameObject Crack2;
    public GameObject Crack3;
    public GameObject Crack4;
    public GameObject Crack5;
    public GameObject Crack6;
    public GameObject Crack7;


    void Update ()
    {
        audioData = GetComponent<AudioSource>();
        if (Input.anyKey)
        {
            // Start Earthquake
            StartEarthquake();
        }
    }

    void Shake ( GameObject[] shakeObjects )
    {
        foreach ( var shakeObject in shakeObjects )
        {
            iTween.ShakePosition ( shakeObject, Vector3.one * shakeAmount, shakeDuration );
        }
    }

    // Cracks Controller
    IEnumerator CracksCoroutine()
    {
        //Print the time of when the function is first called.
        Debug.Log("Started Coroutine at timestamp : " + Time.time);

        // Play Sound
        audioData.Play(0);

        // Shake
        yield return new WaitForSeconds(2);
        Shake(shakeObjects);


        // Crack 1
        yield return new WaitForSeconds(3);
        Crack1.SetActive(true);

        // Crack 2
        yield return new WaitForSeconds(2);
        Crack2.SetActive(true);

        // Crack 3
        yield return new WaitForSeconds(1.5f);
        Crack3.SetActive(true);

        // Crack 4
        yield return new WaitForSeconds(3.25f);
        Crack4.SetActive(true);

        // Crack 5
        yield return new WaitForSeconds(4);
        Crack5.SetActive(true);

        // Crack 6
        yield return new WaitForSeconds(3);
        Crack6.SetActive(true);

        // Crack 7
        //yield return new WaitForSeconds(1);
        //Crack7.SetActive(true);


        //After we have waited 5 seconds print the time again.
        Debug.Log("Finished Coroutine at timestamp : " + Time.time);
    }

    public void StartEarthquake()
    {
        StartCoroutine(CracksCoroutine());
    }

    // Reset
    public void ResetScene()
    {
        // Turn off all cracks

        // Crack 1
        Crack1.SetActive(false);

        // Crack 2
        Crack2.SetActive(false);

        // Crack 3
        Crack3.SetActive(false);

        // Crack 4
        Crack4.SetActive(false);

        // Crack 5
        Crack5.SetActive(false);

        // Crack 6
        Crack6.SetActive(false);

        // Crack 7
        Crack7.SetActive(false);
    }

    //public void HideRuntimeConsole()
    //{
    //    Crack7.SetActive(false);
    //}

    /* Activate Modals */

    public void ActivateModal_1()
    {
        Crack1.SetActive(true);
    }

    public void ActivateModal_2()
    {
        Crack2.SetActive(true);
    }

    public void ActivateModal_3()
    {
        Crack3.SetActive(true);
    }

    public void ActivateModal_4()
    {
        Crack4.SetActive(true);
    }

    public void ActivateModal_5()
    {
        Crack5.SetActive(true);
    }

    public void ActivateModal_6()
    {
        Crack6.SetActive(true);
    }

    /* Deactivate Modals*/

    public void DeactivateModal_1()
    {
        Crack1.SetActive(false);
    }

    public void DeactivateModal_2()
    {
        Crack2.SetActive(false);
    }

    public void DeactivateModal_3()
    {
        Crack3.SetActive(false);
    }

    public void DeactivateModal_4()
    {
        Crack4.SetActive(false);
    }

    public void DeactivateModal_5()
    {
        Crack5.SetActive(false);
    }

    public void DeactivateModal_6()
    {
        Crack6.SetActive(false);
    }
}
