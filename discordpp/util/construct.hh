//
// Created by Aidan on 1/10/2021.
//

#pragma once

namespace discordpp {
template <typename T>
using handleReadX = std::function<void(const bool error, const T res)>;
using handleReadEmpty = std::function<void(const bool error)>;

namespace util {
class ConstructIn {
  public:
    std::shared_ptr<BotStruct> bot = nullptr;
};
} // namespace util
} // namespace discordpp