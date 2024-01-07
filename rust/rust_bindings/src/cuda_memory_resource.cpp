#include "rust-bindings/include/cuda_memory_resource.h"
#include <memory>
#include <rmm/mr/device/cuda_memory_resource.hpp>

class CudaMemoryResource {
  private:
    std::unique_ptr<rmm::mr::cuda_memory_resource> resource{};
};

std::unique_ptr<CudaMemoryResource> new_cuda_memory_resource() {
  return std::make_unique<CudaMemoryResource>();
}
