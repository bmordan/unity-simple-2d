using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player : MonoBehaviour {

	private Rigidbody2D playerRigidbody2D;
	private float jumpforce;
	private float speed;
	private bool isJumping;

	void Start () {
		playerRigidbody2D = GetComponent<Rigidbody2D>();
		jumpforce = 250;
		speed = 3;
		isJumping = false;
	}

	void Update () {
		if (Input.GetButtonDown ("Jump") && !isJumping)
		{
			playerRigidbody2D.AddForce (new Vector2 (0, jumpforce));
			isJumping = true;
		}

		transform.Translate (new Vector3 (Input.GetAxis ("Horizontal"), 0) * Time.deltaTime * speed);
	}

	void OnCollisionStay2D (Collision2D coll) {
		if (coll.gameObject.tag == "Ground") {
			isJumping = false;
		}
	}
}
