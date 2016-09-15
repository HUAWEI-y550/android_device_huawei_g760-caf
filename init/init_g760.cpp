/*
   Copyright (c) 2014, The Linux Foundation. All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.
   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <cstdlib>
#include <fstream>
#include <string>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#define ISMATCH(a,b)    (!strncmp(a,b,PROP_VALUE_MAX))

void vendor_load_properties()
{
    char platform[PROP_VALUE_MAX];
    std::ifstream fin;
    std::string buf;
    int rc;

    rc = property_get("ro.board.platform", platform);
    if (!rc || !ISMATCH(platform, ANDROID_TARGET))
        return;

    fin.open("/proc/app_info");
    while (getline(fin, buf))
        if (buf.find("huawei_fac_product_name") != std::string::npos)
            break;
    fin.close();

    /* G620S-L01 */
    if (strstr(model, "G620S-L01") != NULL) {
        property_set("ro.product.model", "G620S-L01");
        property_set("ro.product.name", "G620S-L01");
        property_set("ro.product.device", "G620S-L01");
        property_set("ro.build.product", "G620S-L01");
        property_set("ro.telephony.default_network", "9");
        property_set("ro.sf.lcd_density","320");
        property_set("ro.build.description", "G620S-L01-user 4.4.4 GRJ90 C00B380 release-keys");
        property_set("ro.build.fingerprint", "Huawei/G620S-L01/hwG620S-L01:4.4.4/HuaweiG620S-L01/C00B380:user/release-keys");
    }
    /* G621-TL00 */
    else if (strstr(model, "G621-TL00") != NULL) {
        property_set("ro.product.model", "G621-TL00");
        property_set("ro.product.name", "G621-TL00");
        property_set("ro.product.device", "G621-TL00");
        property_set("ro.build.product", "G621-TL00");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("persist.dsds.enabled", "true");
        property_set("ro.telephony.default_network", "22");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("ro.ril.multi_rat_capable","true");
        property_set("ro.sf.lcd_density","320");
        property_set("ro.build.description", "G621-TL00-user 4.4.4 GRJ90 C01B361SP01 release-keys");
        property_set("ro.build.fingerprint", "Honor/G621-TL00/hwG621-TL00:4.4.4/HonorG621-TL00/C01B361SP01:user/release-keys");
    }
    /* G622-CL */
    else if (strstr(model, "G622-CL") != NULL) {
        property_set("ro.product.model", "G622-CL");
        property_set("ro.product.name", "G622-CL");
        property_set("ro.product.device", "G622-CL");
        property_set("ro.build.product", "G622-CL");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("persist.dsds.enabled", "true");
        property_set("ro.telephony.default_network", "22");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("ro.ril.multi_rat_capable","true");
        property_set("ro.sf.lcd_density","320");
    }
    /* G660S */
    else if (strstr(model, "G660S") != NULL) {
        property_set("ro.product.model", "G660S");
        property_set("ro.product.name", "G660S");
        property_set("ro.product.device", "G660S");
        property_set("ro.build.product", "G660S");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("persist.dsds.enabled", "true");
        property_set("ro.telephony.default_network", "22");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("ro.ril.multi_rat_capable","true");
        property_set("ro.sf.lcd_density","320");
    }
    /* G760-L01 */
    else if (strstr(model, "G760-L01") != NULL) {
        property_set("ro.product.model", "G760-L01");
        property_set("ro.product.name", "G760-L01");
        property_set("ro.product.device", "G760-L01");
        property_set("ro.build.product", "G760-L01");
        property_set("ro.telephony.default_network", "9");
        property_set("ro.sf.lcd_density","320");
        property_set("ro.build.description", "G7-L01-user 5.1.1 GRJ90 C432B331 release-keys");
        property_set("ro.build.fingerprint", "Huawei/G7-L01/hwG7-L01:5.1.1/HuaweiG7-L01/C432B331:user/release-keys");
    }
    /* Y550-L01 */
    else if (strstr(model, "Y550-L01") != NULL) {
        property_set("ro.product.model", "Y550-L01");
        property_set("ro.product.name", "Y550-L01");
        property_set("ro.product.device", "Y550-L01");
        property_set("ro.build.product", "Y550-L01");
        property_set("ro.telephony.default_network", "9");
        property_set("ro.sf.lcd_density","240");
        property_set("ro.build.description", "Y550-L01-user 4.4.4 GRJ90 C00B246 release-keys");
        property_set("ro.build.fingerprint", "Huawei/Y550-L01/hwY550-L01:4.4.4/HuaweiY550-L01/C00B246:user/ota-rel-keys,release-keys");
    }
    /* Y550-L02 */
    else if (strstr(model, "Y550-L02") != NULL) {
        property_set("ro.product.model", "Y550-L02");
        property_set("ro.product.name", "Y550-L02");
        property_set("ro.product.device", "Y550-L02");
        property_set("ro.build.product", "Y550-L02");
        property_set("ro.telephony.default_network", "9");
        property_set("ro.sf.lcd_density","240");
        property_set("ro.build.description", "Y550-L02-user 4.4.4 GRJ90 C346B247SP01 release-keys");
        property_set("ro.build.fingerprint", "Huawei/Y550-L02/hwY550-L02:4.4.4/HuaweiY550-L02/C346B247SP01:user/ota-rel-keys,release-keys");
    }
    /* Y550-L03 */
    else if (strstr(model, "Y550-L03") != NULL) {
        property_set("ro.product.model", "Y550-L03");
        property_set("ro.product.name", "Y550-L03");
        property_set("ro.product.device", "Y550-L03");
        property_set("ro.build.product", "Y550-L03");
        property_set("ro.telephony.default_network", "9");
        property_set("ro.sf.lcd_density","240");
        property_set("ro.build.description", "Y550-L03-user 4.4.4 GRJ90 C00B249 release-keys");
        property_set("ro.build.fingerprint", "Huawei/Y550-L03/hwY550-L03:4.4.4/HuaweiY550-L03/C00B249:user/ota-rel-keys,release-keys");
    }
    /* Y630-CL */
    else if (strstr(model, "Y630-CL") != NULL) {
        property_set("ro.product.model", "Y630-CL");
        property_set("ro.product.name", "Y630-CL");
        property_set("ro.product.device", "Y630-CL");
        property_set("ro.build.product", "Y630-CL");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("persist.dsds.enabled", "true");
        property_set("ro.telephony.default_network", "22");
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("ro.com.android.dataroaming","true");
        property_set("ro.ril.multi_rat_capable","true");
        property_set("ro.sf.lcd_density","240");
    }
    /* Y635-L01 */
    else if (strstr(model, "Y635-L01") != NULL) {
        property_set("ro.product.model", "Y635-L01");
        property_set("ro.product.name", "Y635-L01");
        property_set("ro.product.device", "Y635-L01");
        property_set("ro.build.product", "Y635-L01");
        property_set("ro.telephony.default_network", "9");
        property_set("ro.sf.lcd_density","240");
    }
   /* G760-L01 */
    else if (strstr(model, "G760-L01") != NULL) {
        property_set("ro.product.model", "HUAWEI G760-L01");
        property_set("ro.product.name", "G760-L01");
        property_set("ro.product.device", "hwG760-L01");
        property_set("ro.build.product", "G760-L01");
        property_set("ro.telephony.default_network", "20");
        property_set("ro.build.description", "G760-L01-user 5.1.1 GRJ90 C464B340 release-keys");
        property_set("ro.build.fingerprint", "Huawei/G760-L01/hwG760-L01:5.1.1/HuaweiG760-L01/C464B340:user/release-keys");
    }
}
