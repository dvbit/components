#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/float_output.h"

namespace esphome {
namespace null_output {

class NullOutput : public output::FloatOutput, public Component {
 public:
  void setup() override {
    // Nessuna inizializzazione hardware necessaria
  }

  void dump_config() override {
    ESP_LOGCONFIG("NullOutput", "Null Output:");
    ESP_LOGCONFIG("NullOutput", "  Type: Float");
  }

 protected:
  void write_state(float state) override {
    // Non fa nulla - il valore viene scartato
    // Opzionalmente puoi loggare il valore per debug:
    // ESP_LOGD("NullOutput", "Received value: %.2f", state);
  }
};

}  // namespace null_output
}  // namespace esphome
