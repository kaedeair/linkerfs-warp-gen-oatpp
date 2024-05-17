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

#ifndef LINKERFS_WARP_GEN_DIRDTO_HPP
#define LINKERFS_WARP_GEN_DIRDTO_HPP


#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

class DirRespDto : public oatpp::DTO {

    DTO_INIT(DirRespDto, DTO)

    DTO_FIELD_INFO(dirPath) {
        info->description = "Dir absolute path";
    }

    DTO_FIELD(String, dirPath);

    DTO_FIELD_INFO(files) {
        info->description = "Files in dir";
    }

    DTO_FIELD(Vector < String >, files);
};

#include OATPP_CODEGEN_END(DTO)
#include OATPP_CODEGEN_BEGIN(DTO)

class DirReqDto : public oatpp::DTO {

    DTO_INIT(DirReqDto, DTO)


    DTO_FIELD_INFO(dirPath) {
        info->description = "Dir absolute path";
    }

    DTO_FIELD(String, dirPath
    );

};

#include OATPP_CODEGEN_END(DTO)

#endif //LINKERFS_WARP_GEN_DIRDTO_HPP
