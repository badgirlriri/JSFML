package org.jsfml;

/**
 * Provides operations on native SFML objects.
 * <p/>
 * Use these methods at your own risk, they <i>will</i> break stuff if you do not know exactly what you are doing.
 */
public final class UnsafeOperations {
    /**
     * Flags an SFML object as Java managed or unmanaged. Java managed objects will be destroyed using the
     * <code>nativeDelete</code> method when this object gets finalized.
     *
     * @param object  The SFML object wrapper.
     * @param managed Whether or not this object is managed by JSFML.
     */
    public static void manageSFMLObject(SFMLNativeObject object, boolean managed) {
        object.setJavaManaged(managed);
    }

    private UnsafeOperations() {
    }
}
