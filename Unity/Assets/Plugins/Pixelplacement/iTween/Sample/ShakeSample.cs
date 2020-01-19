using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// アセット iTween を使ってゲームオブジェクトをゆらす
// 解説記事　http://negi-lab.blog.jp/ShakeObjectsByITween
public class ShakeObjectsByITween : MonoBehaviour
{
    [SerializeField] GameObject[] shakeObjects;
    [SerializeField] float shakeAmount;
    [SerializeField] float shakeDuration;

    private void Update ()
    {
        if ( Input.anyKeyDown )
        {
            Shake ( shakeObjects );
        }
    }

    private void Shake ( GameObject[] shakeObjects )
    {
        foreach ( var shakeObject in shakeObjects )
        {
            // iTweenでオブジェクトをゆらす
            iTween.ShakePosition ( shakeObject, Vector3.one * shakeAmount, shakeDuration );


            // iTween は Hash というものを使い、各種パラメーターを指定できる
            // 参考資料　https://hutonggames.fogbugz.com/default.asp?W618
            /*
            iTween.ShakePosition ( shakeObject, iTween.Hash (
                "x", 2f,
                "y", 1f,
                "delay", 1f,
                "time", 1f ) );
            */
        }
    }
}
