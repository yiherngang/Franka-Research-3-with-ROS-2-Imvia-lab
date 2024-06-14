package org.visp.android;

import android.content.Context;

/**
 * Helper class provides common initialization methods for ViSP library.
 */
public class ViSPLoader
{
  // TODO: Add support for prev versions if visp
    /**
     * ViSP Library version 2.10.0.
     */
    public static final String VISP_VERSION_2_10_0 = "2.10.0";

    /**
     * ViSP Library version 3.0.0.
     */
    public static final String VISP_VERSION_3_0_0 = "3.0.0";

  /**
     * ViSP Library version 3.0.1.
     */
    public static final String VISP_VERSION_3_0_1 = "3.0.1";


    /**
     * ViSP Library version 3.1.0.
     */
    public static final String VISP_VERSION_3_1_0 = "3.1.0";

    /**
     * Current ViSP Library version
     */
    public static final String VISP_VERSION = "3.6.1";


    /**
     * Loads and initializes ViSP library from current application package. Roughly, it's an analog of system.loadLibrary("visp_java").
     * @return Returns true is initialization of ViSP was successful.
     */
    public static boolean initDebug()
    {
        return StaticHelper.initViSP();
    }

    /**
     * Loads and initializes ViSP library using ViSP Engine service.
     * @param Version ViSP library version.
     * @param AppContext application context for connecting to the service.
     * @param Callback object, that implements LoaderCallbackInterface for handling the connection status.
     * @return Returns true if initialization of ViSP is successful.
     */
    public static boolean initAsync(String Version, Context AppContext,
            LoaderCallbackInterface Callback)
    {
        return AsyncServiceHelper.initViSP(Version, AppContext, Callback);
    }
}
