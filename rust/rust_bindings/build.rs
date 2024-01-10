use cmake::Config;


fn main() {
    // TODO: Probably need to make a static lib of the cpp
    //let dst = Config::new("cpp")
    //    .configure_arg("-Drmm_ROOT=/home/coder/rmm/build/latest")
    //    .build_target("all")
    //    .build();
    cxx_build::bridge("src/main.rs")
        .compile("rust_bindings");
    // TODO: Figure out why this is necessary and why corrosion_link_libraries isn't doing the job.
    println!("cargo:rustc-link-lib=static=rmm_shim");
}
