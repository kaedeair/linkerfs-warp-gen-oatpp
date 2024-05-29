/*
 * linkerfs_warp_gen_oatpp: warp configuration file generator backend for project linkerfs
 * Copyright (C) 2024  kaedeair <kaedeair@outlook.com>
 *
 * This file is part of linkerfs_warp_gen_oatpp.
 *
 * linkerfs_warp_gen_oatpp is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * linkerfs_warp_gen_oatpp is distributed in the hope that it will be useful,but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with linkerfs_warp_gen_oatpp. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef LINKERFS_WARP_GEN_OATPP_DOCEXAMPLE_HPP
#define LINKERFS_WARP_GEN_OATPP_DOCEXAMPLE_HPP

#include <oatpp/core/Types.hpp>
#include <oatpp/core/macro/codegen.hpp>

#include OATPP_CODEGEN_BEGIN(DTO)
/**
 * This class is only used for Swagger UI to display correct Response with data example
 */
template<class T>
class RespWithDataExample : public oatpp::DTO {
    DTO_INIT(RespWithDataExample, DTO)
    DTO_FIELD(Int32, code);
    DTO_FIELD_INFO(code) { info->description = "Response state code"; }
    DTO_FIELD(Object<T>, data);
    DTO_FIELD_INFO(data) { info->description = "Response data"; }
    DTO_FIELD(String, msg);
    DTO_FIELD_INFO(msg) { info->description = "Response message"; }
};
#include OATPP_CODEGEN_END(DTO)

#include OATPP_CODEGEN_BEGIN(DTO)
/**
 * This class is only used for Swagger UI to display correct Response without data example
 */
class RespNoDataExample : public oatpp::DTO {
    DTO_INIT(RespNoDataExample, DTO)
    DTO_FIELD(Int32, code);
    DTO_FIELD_INFO(code) { info->description = "Response state code"; }
    DTO_FIELD(String, msg);
    DTO_FIELD_INFO(msg) { info->description = "Response message"; }
};
#include OATPP_CODEGEN_END(DTO)

#endif//LINKERFS_WARP_GEN_OATPP_DOCEXAMPLE_HPP
