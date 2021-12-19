#pragma once

#include <nlohmann/json.hpp>

#include <string>

// --------------------------------------------------------------------------
nlohmann::json
ReadMemoryDatabase(const std::string& filename);

// --------------------------------------------------------------------------
nlohmann::json
ReadSystemDatabase(const std::string& filename);

// --------------------------------------------------------------------------
void
WriteMemoryDatabase(const nlohmann::json& database, const std::string& filename);

// --------------------------------------------------------------------------
void
WriteSystemDatabase(const nlohmann::json& database, const std::string& filename);
