//
// Created by Lemon on 2023/4/18.
//
#pragma once

#include <ostream>

#include "runtime/geometry_value.h"
#include "vec/columns/column_string.h"
#include "vec/data_types/data_type.h"
#include "vec/data_types/data_type_string.h"

namespace doris::vectorized {
class DataTypeGeometry final : public IDataType {
public:
    using ColumnType = ColumnString;
    static constexpr bool is_parametric = false;
    using FieldType = GeometryField;

    const char* get_family_name() const override { return "GEOMETRY"; }
    TypeIndex get_type_id() const override { return TypeIndex::GEOMETRY; }
    PrimitiveType get_type_as_primitive_type() const override { return TYPE_GEOMETRY; }
    TPrimitiveType::type get_type_as_tprimitive_type() const override {
        return TPrimitiveType::GEOMETRY;
    }

    int64_t get_uncompressed_serialized_bytes(const IColumn& column,
                                              int data_version) const override;
    char* serialize(const IColumn& column, char* buf, int data_version) const override;
    const char* deserialize(const char* buf, IColumn* column, int data_version) const override;

    MutableColumnPtr create_column() const override;

/*    *//*virtual Field get_default() const override {
        std::string default_json = "";
        GeometryBinaryValue binary_val(default_json.c_str(), default_json.size());
        return JsonbField(binary_val.value(), binary_val.size());
    }*/

    virtual Field get_default() const override {
        std::string default_geo;
        GeometryBinaryValue binary_val(default_geo.c_str(), default_geo.size());
        return GeometryField(binary_val.value(), binary_val.size());
    }

    bool equals(const IDataType& rhs) const override;

    bool get_is_parametric() const override { return false; }
    bool have_subtypes() const override { return false; }
    bool is_comparable() const override { return false; }
    bool can_be_compared_with_collation() const override { return false; }
    bool is_value_unambiguously_represented_in_contiguous_memory_region() const override {
        return true;
    }
    bool is_categorial() const override { return false; }
    bool can_be_inside_nullable() const override { return true; }
    bool can_be_inside_low_cardinality() const override { return true; }
    std::string to_string(const IColumn& column, size_t row_num) const override;
    void to_string(const IColumn& column, size_t row_num, BufferWritable& ostr) const override;
    Status from_string(ReadBuffer& rb, IColumn* column) const override;

private:
    DataTypeString data_type_string;

};
}


