/***
 * Excerpted from "Programming Google Glass, Second Edition",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material, 
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose. 
 * Visit http://www.pragmaticprogrammer.com/titles/erpgg2 for more book information.
***/
package glass.nevermind;

import android.app.Activity;
import android.os.Bundle;

/**
 * Does nothing, just closes.
 * @author Eric Redmond
 * @twitter coderoshi
 */
public class CancelActivity extends Activity {
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    finish();
  }
}
