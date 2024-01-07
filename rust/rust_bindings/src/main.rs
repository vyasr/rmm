#[cxx::bridge]
mod ffi {
    unsafe extern "C++" {
        include!("rust_bindings/cpp/include/cuda_memory_resource.hpp");

        type CudaMemoryResource;

        fn new_cuda_memory_resource() -> UniquePtr<CudaMemoryResource>;
    }
}

fn main() {
    let mr = ffi::new_cuda_memory_resource();
}
