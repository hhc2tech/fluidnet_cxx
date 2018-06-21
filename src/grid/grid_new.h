#include "ATen/ATen.h"

namespace fluid {
namespace ten {

typedef at::Tensor T;

float getDx(at::Tensor self);

T interpol(const T& self, const T& pos);

void interpol1DWithFluid(
    const T& val_a, const T& is_fluid_a,
    const T& val_b, const T& is_fluid_b,
    const T& t_a, const T& t_b,
    T& is_fluid_ab, T& val_ab);

T interpolWithFluid(const T& self, const T& flags, const T& pos);

T getCentered(const T& self);

T getAtMACX(const T& self);
T getAtMACY(const T& self);
T getAtMACZ(const T& self);

T interpolComponent(const T& self, const T& pos, int c);

T curl(const T& self);

} // namespace ten
} // namespace fluid
